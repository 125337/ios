@interface MMFinderLiveCommentAssistantCollectionViewCell : UICollectionViewCell
{
    BOOL _circleHeader; // +0x8
    MMHeadImageView * _headerImageView; // +0x10
    UILabel * _nameLabel; // +0x18
}
- (void)configWithContact:(id)arg1;
- (void)switchToDeleteStyle;
- (void)switchToAddStyle;
- (void)resetHeaderImageView;
- (void)layoutSubviews;
- (void)initUI;
- (id)headerImageView;
- (void)setHeaderImageView:(id)arg1;
- (id)nameLabel;
- (void)setNameLabel:(id)arg1;
- (BOOL)circleHeader;
- (void)setCircleHeader:(BOOL)arg1;
- (void).cxx_destruct;
@end

