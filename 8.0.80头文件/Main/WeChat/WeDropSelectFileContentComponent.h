@interface WeDropSelectFileContentComponent : WeDropPassthroghView <WeDropHeaderViewComponent>
{
    UIButton * _photoBtn; // +0x8
    UIButton * _fileBtn; // +0x10
    UIView * _topLine; // +0x18
    UIView * _midLine; // +0x20
    UIView * _bottomLine; // +0x28
    UIButton * _lastSelectBtn; // +0x30
    id <WeDropSendConnectedViewDelegate> _delegate; // +0x38
}
- (id)init;
- (void)initSubviews;
- (void)setLastSendInfo:(id)arg1;
- (id)createSeparatorLineView;
- (void)onSelectAlbum;
- (void)onSelectFiles;
- (void)onSelectLastSend;
- (void)sizeToFitWidth:(double)arg1;
- (void)layoutSubviews;
- (id)photoBtn;
- (void)setPhotoBtn:(id)arg1;
- (id)fileBtn;
- (void)setFileBtn:(id)arg1;
- (id)topLine;
- (void)setTopLine:(id)arg1;
- (id)midLine;
- (void)setMidLine:(id)arg1;
- (id)bottomLine;
- (void)setBottomLine:(id)arg1;
- (id)lastSelectBtn;
- (void)setLastSelectBtn:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
