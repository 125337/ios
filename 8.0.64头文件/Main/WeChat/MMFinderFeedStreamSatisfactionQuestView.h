@interface MMFinderFeedStreamSatisfactionQuestView : UIView
{
    id /* block */ _onSelectQuestWording; // +0x8
    NSArray * _quests; // +0x10
    UILabel * _titleLabel; // +0x18
    UIView * _wordingContainer; // +0x20
    NSMutableArray * _wordingViews; // +0x28
}
+ (double)defaultHeight;
- (id)initWithFrame:(CGRect)arg1;
- (void)initViews;
- (void)layoutSubviews;
- (void)updateWithQuests:(id)arg1;
- (id)createWordingView:(id)arg1;
- (id /* block */)onSelectQuestWording;
- (void)setOnSelectQuestWording:(id /* block */)arg1;
- (id)quests;
- (void)setQuests:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)wordingContainer;
- (void)setWordingContainer:(id)arg1;
- (id)wordingViews;
- (void)setWordingViews:(id)arg1;
- (void).cxx_destruct;
@end
