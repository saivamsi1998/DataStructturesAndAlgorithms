class Heaters {
    public int findRadius(int[] houses, int[] heaters) {
        
        Arrays.sort(heaters);
        Arrays.sort(houses);
        
        int ans = 0;
        
        if(heaters[0]>houses[0])
        ans = Math.max(ans,heaters[0]-houses[0]);
        
        if(heaters[heaters.length-1]<houses[houses.length-1])
        ans = Math.max(ans,houses[houses.length-1]-heaters[heaters.length-1]);
        
        // System.out.println(ans);
        for(int i = 0,j=0; i < houses.length;i++ )
        {
            for(;j+1<heaters.length;j++)
            {
                if(Math.abs(heaters[j+1] - houses[i])>Math.abs(heaters[j] - houses[i]))
                    break;
            }
            ans = Math.max(ans,Math.abs(heaters[j] - houses[i]));
        }
        return ans;
    }
