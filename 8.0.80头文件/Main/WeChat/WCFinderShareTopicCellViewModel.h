@interface WCFinderShareTopicCellViewModel : CommonMessageViewModel
{
    double m_titleHeight; // +0x70
    double m_descHeight; // +0x78
    CGSize _viewSize; // +0x80
    CGSize _titleSize; // +0x90
    CGSize _digestSize; // +0xa0
    NSMutableArray * _titleLabelStyles; // +0xb0
    NSMutableArray * _digestLabelStyles; // +0xb8
    double _titleMaxWidth; // +0xc0
    double _digestMaxWidth; // +0xc8
    UIFont * _titleFont; // +0xd0
    UIFont * _digestFont; // +0xd8
    unsigned int _titleMaxLines; // +0xe0
    unsigned int _digestMaxLines; // +0xe4
}
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)cellViewClassName;
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (id)titleStr;
- (id)digestStr;
- (CGSize)viewSize;
- (CGSize)titleSize;
- (CGSize)digestSize;
- (double)titleMaxWidth;
- (double)digestMaxWidth;
- (id)titleFont;
- (id)digestFont;
- (unsigned int)titleMaxLines;
- (unsigned int)digestMaxLines;
- (id)titleLabelStyles;
- (id)digestLabelStyles;
- (id)titleText;
- (id)descText;
- (id)iconUrl;
- (id)poiClassifyId;
- (float)latitude;
- (float)longitude;
- (id)groupTitle;
- (int)topicType;
- (id)additionalAccessibilityDescription;
- (double)titleHeight;
- (double)descHeight;
- (void).cxx_destruct;
@end
