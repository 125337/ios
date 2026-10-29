@interface WARemoteDebugPrintItem : NSObject
{
    BOOL _isSendout; // +0x8
    NSString * _string; // +0x10
}
- (id)string;
- (void)setString:(id)arg1;
- (BOOL)isSendout;
- (void)setIsSendout:(BOOL)arg1;
- (void).cxx_destruct;
@end

