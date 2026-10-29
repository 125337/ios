@interface VoIPCallDecodedFrameCursor : NSObject
{
    BOOL _failed; // +0x8
    unsigned char _legIndex; // +0x9
    BOOL _primed; // +0xa
    VoIPCallSDKStreamDecoder * _decoder; // +0x10
    VoIPCallDecodedFrame * _current; // +0x18
    VoIPCallDecodedFrame * _next; // +0x20
}
- (id)initWithDecoder:(id)arg1 legIndex:(unsigned char)arg2;
- (void)dealloc;
- (BOOL)prime;
- (id)frameForTime:(unsigned long long)arg1;
- (id)p_pullNext;
- (void)p_releaseFrame:(id)arg1;
- (BOOL)failed;
- (void)setFailed:(BOOL)arg1;
- (id)decoder;
- (void)setDecoder:(id)arg1;
- (unsigned char)legIndex;
- (void)setLegIndex:(unsigned char)arg1;
- (id)current;
- (void)setCurrent:(id)arg1;
- (id)next;
- (void)setNext:(id)arg1;
- (BOOL)primed;
- (void)setPrimed:(BOOL)arg1;
- (void).cxx_destruct;
@end
