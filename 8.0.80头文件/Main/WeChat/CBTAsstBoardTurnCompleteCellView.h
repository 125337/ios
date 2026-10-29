@interface CBTAsstBoardTurnCompleteCellView : CBTAsstBoardBaseCellView
{
    BOOL _isLiked; // +0x8
    BOOL _isDisliked; // +0x9
    MMUIButton * _duplicateButton; // +0x10
    MMUIButton * _forwardButton; // +0x18
    MMUIButton * _sourceLinkButton; // +0x20
    MMUIButton * _leftArrowButton; // +0x28
    MMUIButton * _rightArrowButton; // +0x30
    MMUIButton * _retryButton; // +0x38
    MMUIButton * _switchAgentButton; // +0x40
    MMUIButton * _likeButton; // +0x48
    MMUIButton * _dislikeButton; // +0x50
    MMUIButton * _readAloudButton; // +0x58
}
+ (id)toolbarTintColor;
+ (double)fallbackContentHeight;
+ (double)horizontalInsetTotal;
+ (double)calculateLayoutForViewModel:(id)arg1 contentWidth:(double)arg2 outItemInfos:(id *)arg3;
- (UIEdgeInsets)mainContainerInset;
- (id)resolvedToolbarTintColor;
- (void)prepareForReuse;
- (void)setupCellWithViewModel:(id)arg1;
- (void)refreshToolbarAppearance;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)addPressedStateHandler:(id)arg1;
- (void)controlTouchDown:(id)arg1;
- (void)controlTouchUp:(id)arg1;
- (void)sourceLinkButtonClicked;
- (id)hostTraceInfoFromViewModel:(id)arg1;
- (id)collectSameTraceViewModels;
- (void)duplicateButtonClicked;
- (void)forwardButtonClicked;
- (void)likeButtonClicked;
- (void)handleTTSPlayStateChanged:(id)arg1;
- (BOOL)isReadAloudButtonAvailable;
- (void)updateReadAloudButtonState;
- (void)readAloudButtonClicked;
- (void)dislikeButtonClicked;
- (void)reportBelowBtnClickEventWithViewId:(id)arg1 extraParams:(id)arg2;
- (void)reportBelowBtnExpEventWithViewId:(id)arg1 extraParams:(id)arg2;
- (void)reportBelowPlayBtnExpIfNeeded;
- (void)didMoveToWindow;
- (void)setupUI;
- (void)leftArrowButtonClicked;
- (void)rightArrowButtonClicked;
- (void)refreshArrowButtons;
- (void)retryButtonClicked;
- (void)switchAgentButtonClicked;
- (void)onSelectAgent:(id)arg1 traceMsgId:(id)arg2;
- (id)duplicateButton;
- (void)setDuplicateButton:(id)arg1;
- (id)forwardButton;
- (void)setForwardButton:(id)arg1;
- (id)sourceLinkButton;
- (void)setSourceLinkButton:(id)arg1;
- (id)leftArrowButton;
- (void)setLeftArrowButton:(id)arg1;
- (id)rightArrowButton;
- (void)setRightArrowButton:(id)arg1;
- (id)retryButton;
- (void)setRetryButton:(id)arg1;
- (id)switchAgentButton;
- (void)setSwitchAgentButton:(id)arg1;
- (id)likeButton;
- (void)setLikeButton:(id)arg1;
- (id)dislikeButton;
- (void)setDislikeButton:(id)arg1;
- (id)readAloudButton;
- (void)setReadAloudButton:(id)arg1;
- (BOOL)isLiked;
- (void)setIsLiked:(BOOL)arg1;
- (BOOL)isDisliked;
- (void)setIsDisliked:(BOOL)arg1;
- (void).cxx_destruct;
@end
