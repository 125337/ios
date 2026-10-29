@interface OMJLyricInfo : NSObject
{
    NSString * _content; // +0x8
    NSString * _subContent; // +0x10
    shared_ptr<XMJLyricInfo> _backingInfo; // +0x18
    struct _startTime; // +0x28
    struct _endTime; // +0x40
}
- (id)initWithBackingInfo:(const void *)arg1;
- (id)initWithContent:(id)arg1 startTime:(struct)arg2 endTime:(struct)arg3;
- (id)initWithContent:(id)arg1 subContent:(id)arg2 startTime:(struct)arg3 endTime:(struct)arg4;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)description;
- (id)content;
- (id)subContent;
- (struct)startTime;
- (struct)endTime;
- (shared_ptr<XMJLyricInfo>)backingInfo;
- (void)setBackingInfo:(shared_ptr<XMJLyricInfo>)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

