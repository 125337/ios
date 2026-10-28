@interface WCFinderProfileAudioPostTabCell : UICollectionViewCell
{
    unsigned int _options; // +0x8
    id <WCFinderProfileAudioPostTabCellDelegate> _delegate; // +0x10
    UIButton * _postBtn; // +0x18
    UIButton * _manageBtn; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubviews;
- (void)setOptions:(unsigned int)arg1;
- (void)layoutSubviews;
- (id)postBtn;
- (id)manageBtn;
- (void)onPostBtnClick;
- (void)onManageBtnClick;
- (unsigned int)options;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setPostBtn:(id)arg1;
- (void)setManageBtn:(id)arg1;
- (void).cxx_destruct;
@end
