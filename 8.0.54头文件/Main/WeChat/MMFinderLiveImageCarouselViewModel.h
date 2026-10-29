@interface MMFinderLiveImageCarouselViewModel : NSObject
{
    BOOL _isLocal; // +0x8
    BOOL _isShowForClearScreen; // +0x9
    NSString * _imageUrl; // +0x10
    NSString * _imageName; // +0x18
    double _scrollTimeInterval; // +0x20
    double _cellWidth; // +0x28
}
+ (id)cellIdentifier;
+ (Class)cellClass;
- (id)imageUrl;
- (void)setImageUrl:(id)arg1;
- (id)imageName;
- (void)setImageName:(id)arg1;
- (BOOL)isLocal;
- (void)setIsLocal:(BOOL)arg1;
- (BOOL)isShowForClearScreen;
- (void)setIsShowForClearScreen:(BOOL)arg1;
- (double)scrollTimeInterval;
- (void)setScrollTimeInterval:(double)arg1;
- (double)cellWidth;
- (void)setCellWidth:(double)arg1;
- (void).cxx_destruct;
@end

