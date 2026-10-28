@interface MMFinderLiveFansGroupCreateContentView : UIView <ILinkEventExt>
{
    BOOL _isKeyBoardShow; // +0x8
    id /* block */ _createCallback; // +0x10
    id /* block */ _createCompletion; // +0x18
    id /* block */ _closeFansGroupCreateCallback; // +0x20
    id /* block */ _openFansGroupWebCallback; // +0x28
    UIImageView * _fansGroupIconView; // +0x30
    MMUIButton * _foldedBtn; // +0x38
    MMUILabel * _fansGroupCreateTitleLabel; // +0x40
    RichTextView * _fansGroupCreateSubTitleLabel; // +0x48
    MMFinderLiveFansGroupInputView * _inputView; // +0x50
    MMUILabel * _fansGroupInputTipLabel; // +0x58
    MMUIButton * _fansGroupCreateButton; // +0x60
    UITapGestureRecognizer * _closeTapGesture; // +0x68
    double _keyBoardHeight; // +0x70
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutFoldedBtn;
- (void)layoutFansGroupIconView;
- (void)layoutFansGroupCreateTitleLabel;
- (void)layoutFansGroupCreateSubTitleLabel;
- (void)layoutInputView;
- (void)layoutFansGroupInputTipLabel;
- (void)layoutFansGroupCreateButton;
- (void)updateUIForKeyBoardShowChanged;
- (void)updateFansGroupButtonBottom;
- (void)createFansGroupInfo;
- (void)createFansGroupAction;
- (void)updateCloseGestureForKeyBoardShowChanged;
- (void)closeGesture:(id)arg1;
- (BOOL)isSelfFirstResponder;
- (void)updateUIForKeyBoardShow:(BOOL)arg1 keyBoardHeight:(double)arg2;
- (void)viewWillClose;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onClickFoldedBtn;
- (void)reportForOpenFansGroupDetailPage;
- (id /* block */)createCallback;
- (void)setCreateCallback:(id /* block */)arg1;
- (id /* block */)createCompletion;
- (void)setCreateCompletion:(id /* block */)arg1;
- (id /* block */)closeFansGroupCreateCallback;
- (void)setCloseFansGroupCreateCallback:(id /* block */)arg1;
- (id /* block */)openFansGroupWebCallback;
- (void)setOpenFansGroupWebCallback:(id /* block */)arg1;
- (id)fansGroupIconView;
- (void)setFansGroupIconView:(id)arg1;
- (id)foldedBtn;
- (void)setFoldedBtn:(id)arg1;
- (id)fansGroupCreateTitleLabel;
- (void)setFansGroupCreateTitleLabel:(id)arg1;
- (id)fansGroupCreateSubTitleLabel;
- (void)setFansGroupCreateSubTitleLabel:(id)arg1;
- (id)inputView;
- (void)setInputView:(id)arg1;
- (id)fansGroupInputTipLabel;
- (void)setFansGroupInputTipLabel:(id)arg1;
- (id)fansGroupCreateButton;
- (void)setFansGroupCreateButton:(id)arg1;
- (id)closeTapGesture;
- (void)setCloseTapGesture:(id)arg1;
- (BOOL)isKeyBoardShow;
- (void)setIsKeyBoardShow:(BOOL)arg1;
- (double)keyBoardHeight;
- (void)setKeyBoardHeight:(double)arg1;
- (void).cxx_destruct;
@end
