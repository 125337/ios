@interface MMFinderLiveOlyBarragePubbleCell : UIView <CAAnimationDelegate>
{
    id /* block */ _tapCallback; // +0x8
    id /* block */ _prepareForReuseCallback; // +0x10
    MMFinderLiveOlyBarragePubbleTravel * _barrageTravel; // +0x18
    long long _uiStyle; // +0x20
    long long _currTheme; // +0x28
    MMFinderLiveBarragePubbleCellFrame * _cellFrame; // +0x30
    UIView * _pubbleBackView; // +0x38
    RichTextView * _contentLabel; // +0x40
    UIImageView * _starIconView; // +0x48
}
- (id)initWithCellFrame:(id)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutPubbleBackView;
- (void)layoutStarIconView;
- (void)layoutContentLabel;
- (void)updateStarIconViewOrigin;
- (void)updateContentLabelOrigin;
- (id)starIconImage;
- (id)contentColor;
- (void)resetCellFrame:(id)arg1;
- (void)updateCellFrame:(id)arg1;
- (void)updatePubbleStyle:(long long)arg1;
- (void)updateTheme:(long long)arg1;
- (void)configBarragePubbleTravel:(id)arg1 withContainerView:(id)arg2;
- (void)displayFinish;
- (void)display;
- (int)getCurrentCellFrameLayoutStyle;
- (CGSize)cellSize;
- (void)addGestures;
- (void)onBarragePubbleTap:(id)arg1;
- (id /* block */)tapCallback;
- (void)setTapCallback:(id /* block */)arg1;
- (id /* block */)prepareForReuseCallback;
- (void)setPrepareForReuseCallback:(id /* block */)arg1;
- (id)barrageTravel;
- (void)setBarrageTravel:(id)arg1;
- (long long)uiStyle;
- (void)setUiStyle:(long long)arg1;
- (long long)currTheme;
- (void)setCurrTheme:(long long)arg1;
- (id)cellFrame;
- (void)setCellFrame:(id)arg1;
- (id)pubbleBackView;
- (void)setPubbleBackView:(id)arg1;
- (id)contentLabel;
- (void)setContentLabel:(id)arg1;
- (id)starIconView;
- (void)setStarIconView:(id)arg1;
- (void).cxx_destruct;
@end
