@interface WCAdConsultBarView : WCAdBaseBarView
{
    WCDataItem * _dataItem; // +0x8
    WCAdConsultBarCarouselInfo * _consultCarouselInfo; // +0x10
    unsigned long long _itemScene; // +0x18
    WCAdAlphaButton * _titleButton; // +0x20
    MMUILabel * _currentTitleLabel; // +0x28
    MMUILabel * _nextTitleLabel; // +0x30
    WCAdAlphaButton * _consultButton; // +0x38
    WCAdURLImageView * _iconImageView; // +0x40
    long long _currentIndex; // +0x48
    WCAdConsultBarInfo * _currentConsultBarInfo; // +0x50
}
+ (double)topMargin;
+ (double)bottomMargin;
+ (double)viewHeight;
- (id)initWithFrame:(CGRect)arg1 dataItem:(id)arg2 contentItemScene:(unsigned long long)arg3 delegate:(id)arg4;
- (void)initSubviews;
- (id)titleButton;
- (id)consultButton;
- (double)titleButtonWidth;
- (id)createTitleLabelWithIndex:(long long)arg1;
- (void)updateConsultBarToIndex:(long long)arg1;
- (void)updateTitleButtonUI;
- (void)updateConsultButton;
- (void)onTitleButtonClicked:(id)arg1;
- (void)onConsultButtonClicked:(id)arg1;
- (id)consultBarLogic;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)consultCarouselInfo;
- (void)setConsultCarouselInfo:(id)arg1;
- (unsigned long long)itemScene;
- (void)setItemScene:(unsigned long long)arg1;
- (void)setTitleButton:(id)arg1;
- (id)currentTitleLabel;
- (void)setCurrentTitleLabel:(id)arg1;
- (id)nextTitleLabel;
- (void)setNextTitleLabel:(id)arg1;
- (void)setConsultButton:(id)arg1;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (long long)currentIndex;
- (void)setCurrentIndex:(long long)arg1;
- (id)currentConsultBarInfo;
- (void)setCurrentConsultBarInfo:(id)arg1;
- (void).cxx_destruct;
@end

