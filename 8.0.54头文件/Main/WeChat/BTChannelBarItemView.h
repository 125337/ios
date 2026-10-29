@interface BTChannelBarItemView : BTBaseBarItemView
{
    MMUILabel * m_dotLabel; // +0x8
    MMWebImageView * m_smallIconImageView; // +0x10
}
- (void)updateViewModel:(id)arg1;
- (id)channelBarItemViewModel;
- (void)initHeaderView;
- (void)updateHeaderView;
- (void)initSubtitleView;
- (void)initSmallIconView;
- (void)updateSmallIconView;
- (void)inititemSubTitleLabel;
- (void)initArrowView;
- (void)initDotImageView;
- (void)updateDotImageView;
- (void)layoutSubtitleView;
- (void)layoutDotImageView;
- (double)layoutSmallIconView;
- (void).cxx_destruct;
@end

