@interface WCFinderProfileAudioFullPostViewCell : UICollectionViewCell <ILinkEventExt>
{
    id <WCFinderProfileAudioFullPostViewCellDelegate> _delegate; // +0x8
    id <WCFinderProfileAudioFullPostViewCellDataSource> _dataSource; // +0x10
    RichTextView * _stateLabel; // +0x18
    RichTextView * _tipsLabel; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (id)stateLabel;
- (void)setStateLabel:(id)arg1;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg1;
- (void).cxx_destruct;
@end
