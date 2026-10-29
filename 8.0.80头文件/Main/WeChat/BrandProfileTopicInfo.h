@interface BrandProfileTopicInfo : NSObject
{
    BOOL _isFirstLine; // +0x8
    NSString * _titleStr; // +0x10
    NSString * _titleTruncatedStr; // +0x18
    NSString * _descStr; // +0x20
    NSString * _urlStr; // +0x28
    unsigned long long _tagID; // +0x30
    NSAttributedString * _topicAttributedStr; // +0x38
    unsigned long long _row; // +0x40
    unsigned long long _column; // +0x48
    CGPoint _topicButtonOrigin; // +0x50
    CGSize _topicButtonSize; // +0x60
}
- (BOOL)isFirstLine;
- (void)setIsFirstLine:(BOOL)arg1;
- (CGPoint)topicButtonOrigin;
- (void)setTopicButtonOrigin:(CGPoint)arg1;
- (CGSize)topicButtonSize;
- (void)setTopicButtonSize:(CGSize)arg1;
- (id)titleStr;
- (void)setTitleStr:(id)arg1;
- (id)titleTruncatedStr;
- (void)setTitleTruncatedStr:(id)arg1;
- (id)descStr;
- (void)setDescStr:(id)arg1;
- (id)urlStr;
- (void)setUrlStr:(id)arg1;
- (unsigned long long)tagID;
- (void)setTagID:(unsigned long long)arg1;
- (id)topicAttributedStr;
- (void)setTopicAttributedStr:(id)arg1;
- (unsigned long long)row;
- (void)setRow:(unsigned long long)arg1;
- (unsigned long long)column;
- (void)setColumn:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
