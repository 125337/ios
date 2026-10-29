@interface QMapLoggerLite : NSObject
{
    BOOL _status; // +0x8
    NSString * _text; // +0x10
}
- (BOOL)status;
- (void)setStatus:(BOOL)arg1;
- (id)text;
- (void)setText:(id)arg1;
- (void).cxx_destruct;
@end

