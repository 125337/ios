@interface MJTTSRequestItem : NSObject
{
    OMJID * _ttsSegmentID; // +0x8
    NSString * _text; // +0x10
    NSString * _roleID; // +0x18
    NSString * _roleName; // +0x20
    NSString * _audioFilePath; // +0x28
}
- (id)initWithTTSSegmentID:(id)arg1 text:(id)arg2 roleID:(id)arg3 roleName:(id)arg4 audioFilePath:(id)arg5;
- (id)ttsSegmentID;
- (id)text;
- (id)roleID;
- (id)roleName;
- (id)audioFilePath;
- (void).cxx_destruct;
@end
