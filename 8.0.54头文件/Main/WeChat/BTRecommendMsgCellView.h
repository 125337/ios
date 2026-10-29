@interface BTRecommendMsgCellView : BTBaseRecommendAppMsgCellView
{
    BOOL _bizContentKeepHL; // +0x8
    BOOL _appMsgKeepHL; // +0x9
    MMUILabel * _msgTitleLabel; // +0x10
    UIButton * _bizContentView; // +0x18
    MMWebImageView * _headerView; // +0x20
    MMUILabel * _nickNameLabel; // +0x28
    MMUILabel * _recommendReasonLabel; // +0x30
    RichTextView * _signatureLabel; // +0x38
    UIView * _separateLine; // +0x40
    UIButton * _appMsgContentView; // +0x48
    MMUILabel * _appMsgRecommendReasonLabel; // +0x50
    RichTextView * _appMsgTitleLabel; // +0x58
    UIImageView * _arrowView; // +0x60
    CALayer * _bizContentHighlightLayer; // +0x68
    CALayer * _appMsgHighlightLayer; // +0x70
}
- (void)initSubviews;
- (void)onUpdateViewModel;
- (void)initMsgTitleLabel;
- (void)initBizContentView;
- (void)initBizAppMsgViews;
- (unsigned long long)cellRectCorner;
- (void)layoutSubviews;
- (void)makeSafeLabel:(id)arg1 fixWidth:(double)arg2;
- (void)onClickAppMsgView:(id)arg1;
- (void)onJumpToProfile;
- (void)handleLongPressEx:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)msgTitleLabel;
- (void)setMsgTitleLabel:(id)arg1;
- (id)bizContentView;
- (void)setBizContentView:(id)arg1;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (id)nickNameLabel;
- (void)setNickNameLabel:(id)arg1;
- (id)recommendReasonLabel;
- (void)setRecommendReasonLabel:(id)arg1;
- (id)signatureLabel;
- (void)setSignatureLabel:(id)arg1;
- (id)separateLine;
- (void)setSeparateLine:(id)arg1;
- (id)appMsgContentView;
- (void)setAppMsgContentView:(id)arg1;
- (id)appMsgRecommendReasonLabel;
- (void)setAppMsgRecommendReasonLabel:(id)arg1;
- (id)appMsgTitleLabel;
- (void)setAppMsgTitleLabel:(id)arg1;
- (id)arrowView;
- (void)setArrowView:(id)arg1;
- (id)bizContentHighlightLayer;
- (void)setBizContentHighlightLayer:(id)arg1;
- (id)appMsgHighlightLayer;
- (void)setAppMsgHighlightLayer:(id)arg1;
- (BOOL)bizContentKeepHL;
- (void)setBizContentKeepHL:(BOOL)arg1;
- (BOOL)appMsgKeepHL;
- (void)setAppMsgKeepHL:(BOOL)arg1;
- (void).cxx_destruct;
@end

