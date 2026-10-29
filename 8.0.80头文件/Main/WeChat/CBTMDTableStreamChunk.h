@interface CBTMDTableStreamChunk : NSObject
{
    BOOL _isHeader; // +0x8
    NSAttributedString * _content; // +0x10
    unsigned long long _row; // +0x18
    unsigned long long _column; // +0x20
}
- (id)content;
- (void)setContent:(id)arg1;
- (unsigned long long)row;
- (void)setRow:(unsigned long long)arg1;
- (unsigned long long)column;
- (void)setColumn:(unsigned long long)arg1;
- (BOOL)isHeader;
- (void)setIsHeader:(BOOL)arg1;
- (void).cxx_destruct;
@end
