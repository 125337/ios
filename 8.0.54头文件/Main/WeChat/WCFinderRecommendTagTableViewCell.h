@interface WCFinderRecommendTagTableViewCell : MMTableViewCell
{
    id <WCFinderRecommendTagTableViewCellDelegate> _delegate; // +0x8
    UIView * _seperateLine; // +0x10
    MMUILabel * _topicLabel; // +0x18
    MMUILabel * _topicNumberLabel; // +0x20
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (void)setUpUI;
- (void)initSeperateLine;
- (void)initTopicLabel;
- (void)initTopicHotNumberLabel;
- (void)updateWithModel:(id)arg1 width:(double)arg2;
- (void)onClickTagCell;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)seperateLine;
- (void)setSeperateLine:(id)arg1;
- (id)topicLabel;
- (void)setTopicLabel:(id)arg1;
- (id)topicNumberLabel;
- (void)setTopicNumberLabel:(id)arg1;
- (void).cxx_destruct;
@end

