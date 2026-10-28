@interface WCTogetherGuideView : MMHalfScreenGuideView
{
    UIImageView * _guideImageView; // +0x8
    MMUILabel * _guideAlbumLabel; // +0x10
}
- (id)init;
- (id)createCancelButton;
- (void)loadCustomizedContentView;
- (void)layoutCustomizedContentView;
- (id)guideImageView;
- (void)setGuideImageView:(id)arg1;
- (id)guideAlbumLabel;
- (void)setGuideAlbumLabel:(id)arg1;
- (void).cxx_destruct;
@end
