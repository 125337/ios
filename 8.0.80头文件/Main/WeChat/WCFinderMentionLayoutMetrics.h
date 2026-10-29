@interface WCFinderMentionLayoutMetrics : NSObject
{
    BOOL _usesFixedBottomPadding; // +0x8
    BOOL _commentDeleteLabelHasBackground; // +0x9
    unsigned long long _displayStyle; // +0x10
    unsigned long long _cellFamily; // +0x18
    double _avatarTopPadding; // +0x20
    double _titleTopPadding; // +0x28
    double _bottomPadding; // +0x30
    double _horizontalPadding; // +0x38
    double _avatarTextSpacing; // +0x40
    double _textThumbSpacing; // +0x48
    double _textVerticalSpacing; // +0x50
    double _refContentSpacing; // +0x58
    double _avatarSize; // +0x60
    double _thumbSize; // +0x68
    double _separatorHeight; // +0x70
    double _refContentHorizontalOffset; // +0x78
    double _refContentTextTrailingOffset; // +0x80
    double _attachmentBottomSpacingWithoutRef; // +0x88
    double _interactionContentMinHeight; // +0x90
    double _interactionButtonTopSpacing; // +0x98
    double _invalidCommentTopPadding; // +0xa0
    double _invalidCommentMinCellHeight; // +0xa8
    double _commentDeleteLabelFontSize; // +0xb0
    double _commentDeleteLabelFixedHeight; // +0xb8
    double _commentDeleteLabelCornerRadius; // +0xc0
    double _commentReplyButtonMinWidth; // +0xc8
    double _nonFinderAvatarCornerRadius; // +0xd0
    double _thumbCornerRadius; // +0xd8
    double _mentionContentTopSpacing; // +0xe0
    double _mentionContentBottomSpacing; // +0xe8
    double _mentionContentFontSize; // +0xf0
    double _thumbsUpImageTopSpacing; // +0xf8
    double _privateAccountContentSpacing; // +0x100
    double _pureTextTrailingSpacing; // +0x108
    UIEdgeInsets _commentDeleteLabelContentInsets; // +0x110
    UIEdgeInsets _commentReplyButtonContentInsets; // +0x130
}
+ (id)metricsForDisplayStyle:(unsigned long long)arg1 cellFamily:(unsigned long long)arg2;
+ (id)legacyUnifiedMetrics;
+ (id)legacyWechatMetrics;
+ (id)legacyAchievementMetrics;
+ (id)simplifiedUnifiedMetrics;
+ (id)simplifiedWechatMetrics;
+ (id)simplifiedAchievementMetrics;
- (id)initWithDisplayStyle:(unsigned long long)arg1 cellFamily:(unsigned long long)arg2 avatarTopPadding:(double)arg3 titleTopPadding:(double)arg4 bottomPadding:(double)arg5 horizontalPadding:(double)arg6 avatarTextSpacing:(double)arg7 textThumbSpacing:(double)arg8 textVerticalSpacing:(double)arg9 refContentSpacing:(double)arg10 avatarSize:(double)arg11 thumbSize:(double)arg12;
- (unsigned long long)displayStyle;
- (void)setDisplayStyle:(unsigned long long)arg1;
- (unsigned long long)cellFamily;
- (void)setCellFamily:(unsigned long long)arg1;
- (double)avatarTopPadding;
- (void)setAvatarTopPadding:(double)arg1;
- (double)titleTopPadding;
- (void)setTitleTopPadding:(double)arg1;
- (double)bottomPadding;
- (void)setBottomPadding:(double)arg1;
- (double)horizontalPadding;
- (void)setHorizontalPadding:(double)arg1;
- (double)avatarTextSpacing;
- (void)setAvatarTextSpacing:(double)arg1;
- (double)textThumbSpacing;
- (void)setTextThumbSpacing:(double)arg1;
- (double)textVerticalSpacing;
- (void)setTextVerticalSpacing:(double)arg1;
- (double)refContentSpacing;
- (void)setRefContentSpacing:(double)arg1;
- (double)avatarSize;
- (void)setAvatarSize:(double)arg1;
- (double)thumbSize;
- (void)setThumbSize:(double)arg1;
- (double)separatorHeight;
- (void)setSeparatorHeight:(double)arg1;
- (double)refContentHorizontalOffset;
- (void)setRefContentHorizontalOffset:(double)arg1;
- (double)refContentTextTrailingOffset;
- (void)setRefContentTextTrailingOffset:(double)arg1;
- (double)attachmentBottomSpacingWithoutRef;
- (void)setAttachmentBottomSpacingWithoutRef:(double)arg1;
- (double)interactionContentMinHeight;
- (void)setInteractionContentMinHeight:(double)arg1;
- (BOOL)usesFixedBottomPadding;
- (void)setUsesFixedBottomPadding:(BOOL)arg1;
- (double)interactionButtonTopSpacing;
- (void)setInteractionButtonTopSpacing:(double)arg1;
- (double)invalidCommentTopPadding;
- (void)setInvalidCommentTopPadding:(double)arg1;
- (double)invalidCommentMinCellHeight;
- (void)setInvalidCommentMinCellHeight:(double)arg1;
- (double)commentDeleteLabelFontSize;
- (void)setCommentDeleteLabelFontSize:(double)arg1;
- (double)commentDeleteLabelFixedHeight;
- (void)setCommentDeleteLabelFixedHeight:(double)arg1;
- (double)commentDeleteLabelCornerRadius;
- (void)setCommentDeleteLabelCornerRadius:(double)arg1;
- (UIEdgeInsets)commentDeleteLabelContentInsets;
- (void)setCommentDeleteLabelContentInsets:(UIEdgeInsets)arg1;
- (BOOL)commentDeleteLabelHasBackground;
- (void)setCommentDeleteLabelHasBackground:(BOOL)arg1;
- (UIEdgeInsets)commentReplyButtonContentInsets;
- (void)setCommentReplyButtonContentInsets:(UIEdgeInsets)arg1;
- (double)commentReplyButtonMinWidth;
- (void)setCommentReplyButtonMinWidth:(double)arg1;
- (double)nonFinderAvatarCornerRadius;
- (void)setNonFinderAvatarCornerRadius:(double)arg1;
- (double)thumbCornerRadius;
- (void)setThumbCornerRadius:(double)arg1;
- (double)mentionContentTopSpacing;
- (void)setMentionContentTopSpacing:(double)arg1;
- (double)mentionContentBottomSpacing;
- (void)setMentionContentBottomSpacing:(double)arg1;
- (double)mentionContentFontSize;
- (void)setMentionContentFontSize:(double)arg1;
- (double)thumbsUpImageTopSpacing;
- (void)setThumbsUpImageTopSpacing:(double)arg1;
- (double)privateAccountContentSpacing;
- (void)setPrivateAccountContentSpacing:(double)arg1;
- (double)pureTextTrailingSpacing;
- (void)setPureTextTrailingSpacing:(double)arg1;
@end
