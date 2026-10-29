@interface TPBufferedRecord : NSObject
{
    BOOL _isBuffering; // +0x8
    NSMutableArray * _bufferedStepArray; // +0x10
}
- (BOOL)isBuffering;
- (void)setIsBuffering:(BOOL)arg1;
- (id)bufferedStepArray;
- (void)setBufferedStepArray:(id)arg1;
- (void).cxx_destruct;
@end
