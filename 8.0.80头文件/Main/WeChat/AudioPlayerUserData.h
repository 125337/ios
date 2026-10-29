@interface AudioPlayerUserData : NSObject
{
    unsigned int _audioid; // +0x8
    int _lastRecordTime; // +0xc
    CMessageWrap * _msgWrap; // +0x10
}
- (unsigned int)audioid;
- (void)setAudioid:(unsigned int)arg1;
- (int)lastRecordTime;
- (void)setLastRecordTime:(int)arg1;
- (id)msgWrap;
- (void)setMsgWrap:(id)arg1;
- (void).cxx_destruct;
@end
