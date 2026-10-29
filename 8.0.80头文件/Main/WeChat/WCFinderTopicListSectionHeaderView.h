@interface WCFinderTopicListSectionHeaderView : UICollectionReusableView
{
    id <WCFinderTopicListSectionHeaderViewDelegate> _delegate; // +0x8
    MMUIButton * _postBtn; // +0x10
    MMWebImageView * _headerImageView; // +0x18
    UIView * _wordContainer; // +0x20
    UIView * _voiceOverView; // +0x28
    RichTextView * _topicTitleLabel; // +0x30
    UILabel * _topicSubTitleLabel; // +0x38
    UILabel * _topicCountLabel; // +0x40
    UIImageView * _arrowImageView; // +0x48
    WCFinderBriefCardView * _musicBriefCard; // +0x50
    FinderWordsTopicExtInfo * _wordsTopicExt; // +0x58
    UIView * _btnContainer; // +0x60
}
+ (double)getTopicListSectionHeaderViewHeightWithTopicType:(int)arg1 imageUrl:(id)arg2 topicTitle:(id)arg3 topicLocation:(id)arg4 topicDetailLocation:(id)arg5 topicCount:(unsigned long long)arg6 totalWatchCount:(unsigned long long)arg7 width:(double)arg8 wordsTopicExt:(id)arg9 optionParams:(id)arg10;
+ (double)getFadeInStartOffsetWithTopicType:(int)arg1 imageUrl:(id)arg2 topicTitle:(id)arg3 topicLocation:(id)arg4 topicDetailLocation:(id)arg5 topicCount:(unsigned long long)arg6 totalWatchCount:(unsigned long long)arg7;
+ (id)genTopicTitleWithType:(int)arg1 topicTitle:(id)arg2 topicLocation:(id)arg3 showHighlightTopic:(BOOL)arg4;
+ (id)generateBottomButtonWithSvgImageName:(id)arg1 title:(id)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (void)prepareForReuse;
- (id)postBtn;
- (id)btnContainer;
- (id)musicBriefCard;
- (id)headerImageView;
- (id)wordContainer;
- (id)voiceOverView;
- (id)topicTitleLabel;
- (id)topicSubTitleLabel;
- (id)topicCountLabel;
- (id)arrowImageView;
- (id)accessibilityLabel;
- (void)updateTopicType:(int)arg1 imageUrl:(id)arg2 topicTitle:(id)arg3 topicLocation:(id)arg4 topicDetailLocation:(id)arg5 topicCount:(unsigned long long)arg6 totalWatchCount:(unsigned long long)arg7 wordsTopicExt:(id)arg8 optionParams:(id)arg9;
- (BOOL)needsShowLocationArrowWithType:(int)arg1 topicLocation:(id)arg2;
- (void)setupSubviews;
- (void)onClickPostAction;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setPostBtn:(id)arg1;
- (void)setHeaderImageView:(id)arg1;
- (void)setWordContainer:(id)arg1;
- (void)setVoiceOverView:(id)arg1;
- (void)setTopicTitleLabel:(id)arg1;
- (void)setTopicSubTitleLabel:(id)arg1;
- (void)setTopicCountLabel:(id)arg1;
- (void)setArrowImageView:(id)arg1;
- (void)setMusicBriefCard:(id)arg1;
- (id)wordsTopicExt;
- (void)setWordsTopicExt:(id)arg1;
- (void)setBtnContainer:(id)arg1;
- (void).cxx_destruct;
@end
