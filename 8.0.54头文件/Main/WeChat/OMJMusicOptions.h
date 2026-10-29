@interface OMJMusicOptions : NSObject
{
    OMJMusicInfo * _musicInfo; // +0x8
    unsigned long long _sourceType; // +0x10
    shared_ptr<XMJMusicInfo> _backingInfo; // +0x18
}
- (id)initWithBackingMusicInfo:(const void *)arg1 sourceType:(unsigned long long)arg2;
- (id)initWithMusicInfo:(id)arg1 sourceType:(unsigned long long)arg2;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)description;
- (id)musicInfo;
- (unsigned long long)sourceType;
- (shared_ptr<XMJMusicInfo>)backingInfo;
- (void)setBackingInfo:(shared_ptr<XMJMusicInfo>)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

