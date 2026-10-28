@interface GWImageCardCellView : GWHostBaseView
{
    BOOL _hidePlayBtn; // +0x8
    BOOL _hideDesc; // +0x9
    NSString * _coverImgUrl; // +0x10
    NSString * _desc; // +0x18
}
- (void)configureWithCellModel:(id)arg1;
- (id)coverImgUrl;
- (void)setCoverImgUrl:(id)arg1;
- (BOOL)hidePlayBtn;
- (void)setHidePlayBtn:(BOOL)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (BOOL)hideDesc;
- (void)setHideDesc:(BOOL)arg1;
- (void).cxx_destruct;
@end
