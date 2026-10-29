@interface BatchInfo : NSObject
{
    NSMutableArray * _elements; // +0x8
    long long _formatType; // +0x10
}
- (id)init;
- (id)elements;
- (void)setElements:(id)arg1;
- (long long)formatType;
- (void)setFormatType:(long long)arg1;
- (void).cxx_destruct;
@end
