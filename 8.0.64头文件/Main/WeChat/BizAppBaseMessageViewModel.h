@interface BizAppBaseMessageViewModel : CommonMessageViewModel <IStrangerContactMgrExt>
{
    CGSize _viewSize; // +0x70
    CGSize _titleSize; // +0x80
    CGSize _digestSize; // +0x90
    NSMutableArray * _titleLabelStyles; // +0xa0
    NSMutableArray * _digestLabelStyles; // +0xa8
    double _titleMaxWidth; // +0xb0
    double _digestMaxWidth; // +0xb8
    UIFont * _titleFont; // +0xc0
    UIFont * _digestFont; // +0xc8
    unsigned int _titleMaxLines; // +0xd0
    unsigned int _digestMaxLines; // +0xd4
    BOOL _needShowSourceLine; // +0xd8
    CContact * _bizContact; // +0xe0
}
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;
- (id)titleStr;
- (id)digestStr;
- (BOOL)needShowSourceLine;
- (BOOL)needShowSourceDividerLine;
- (id)sourceNickname;
- (id)sourceUsrname;
- (id)sourceDetailStr;
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
- (void)resetLayoutCache;
- (void)onStrangerContactUpdated:(id)arg1 Contact:(id)arg2;
- (double)sourceViewHeight;
- (id)sourceBackgroundColor;
- (id)additionalAccessibilityDescription;
- (id)accessibilityMessageType;
- (id)bizContact;
- (void)setBizContact:(id)arg1;
- (void).cxx_destruct;
@end
