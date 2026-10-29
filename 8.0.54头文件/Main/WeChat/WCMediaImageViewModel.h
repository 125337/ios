@interface WCMediaImageViewModel : NSObject
{
    WCMomentsPageContext * _pageContext; // +0x8
}
+ (id)viewModelWithMediaItem:(id)arg1;
+ (id)viewModelWithMMImage:(id)arg1;
- (BOOL)isLivePhoto;
- (void)fillExtraDataInImageMaterial:(id)arg1;
- (id)pageContext;
- (void)setPageContext:(id)arg1;
- (void).cxx_destruct;
@end

