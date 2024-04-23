#include<stdio.h>
int main(){
    int num_song;
    printf("Number of songs in the playlist : ");
    scanf("%d",&num_song);

    int singer[num_song];
    int singer_count=0;
    int singer_id[num_song/2];
    int fav_singer=1;
    int m=0;
    

    printf("Enter the singer ID: ");
    for(int k=0;k < num_song;k++){
        scanf("%d",&singer[k]);
        if(k==num_song-1){
            printf("\n");
        }
        if(k==num_song-1){
            for(int i=0;i < num_song;i++){  
                int count=0;
                for(int j=0;j<num_song;j++){
                    if(singer[i]==singer[j]){
                       count++;
                    }
                }
                if(singer_count==count && singer_id[m]!=singer[i]){
                    m++;
                    singer_id[m]=singer[i];
                    fav_singer++;
                }
                if(singer_count < count){
                   singer_count=count;
                   singer_id[m]=singer[i];
                   fav_singer=1;
                }  
            }
        }
    }
    printf("there are %d favourite singers.",fav_singer);
}
             



