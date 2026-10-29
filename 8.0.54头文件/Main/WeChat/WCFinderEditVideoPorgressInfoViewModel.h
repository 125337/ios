@interface WCFinderEditVideoPorgressInfoViewModel : NSObject
{
    BOOL _isLoadingImg; // +0x8
    NSMutableArray * _countNums; // +0x10
    NSMutableArray * _assets; // +0x18
    NSMutableArray * _thumbImages; // +0x20
}
+ (id)viewModelWithAssets:(id)arg1;
+ (unsigned long long)countOfThumePerSecond;
- (id)initWithAssets:(id)arg1;
- (id)thumbImages;
- (void)getImgCount;
- (void)genThumbImagesWithSize:(CGSize)arg1 completion:(id /* block */)arg2;
- (id)countNums;
- (void)setCountNums:(id)arg1;
- (BOOL)isLoadingImg;
- (void)setIsLoadingImg:(BOOL)arg1;
- (id)assets;
- (void)setAssets:(id)arg1;
- (void)setThumbImages:(id)arg1;
- (void).cxx_destruct;
@end

