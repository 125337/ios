@interface AudioRecorderUserData : NSObject <NSCopying>
{
    BOOL _receiveEndFlag; // +0x8
    BOOL _isSetInputPortWithBuiltInMic; // +0x9
    BOOL _isInputPortReseted; // +0xa
    BOOL _bCancelUpload; // +0xb
    unsigned int _createtime; // +0xc
    unsigned int _audioid; // +0x10
    unsigned int _duration; // +0x14
    unsigned int _inputId; // +0x18
    unsigned int _errorCode; // +0x1c
    unsigned int _receiveDataLength; // +0x20
    NSString * _fromusr; // +0x28
    NSString * _tousr; // +0x30
    NSString * _chatname; // +0x38
    NSString * _msgSource; // +0x40
    long long _voiceFormat; // +0x48
    unsigned long long _touchBeginTimestamp; // +0x50
    unsigned long long _requestRecordPermissionCallbackTimestamp; // +0x58
    unsigned long long _recordStartTimestamp; // +0x60
    unsigned long long _prepareQueueTimestamp; // +0x68
    unsigned long long _audioQueueNewTimestamp; // +0x70
    unsigned long long _audioQueueInitTimestamp; // +0x78
    unsigned long long _audioSessionActiveTimestamp; // +0x80
    unsigned long long _inputDeviceSelectedTimestamp; // +0x88
    unsigned long long _recordBeginTimestamp; // +0x90
    unsigned long long _audioQueueStartedTimestamp; // +0x98
    unsigned long long _receiveFirstPCMTimestamp; // +0xa0
}
- (id)init;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)fromusr;
- (void)setFromusr:(id)arg1;
- (id)tousr;
- (void)setTousr:(id)arg1;
- (id)chatname;
- (void)setChatname:(id)arg1;
- (id)msgSource;
- (void)setMsgSource:(id)arg1;
- (long long)voiceFormat;
- (void)setVoiceFormat:(long long)arg1;
- (unsigned int)createtime;
- (void)setCreatetime:(unsigned int)arg1;
- (unsigned int)audioid;
- (void)setAudioid:(unsigned int)arg1;
- (unsigned int)duration;
- (void)setDuration:(unsigned int)arg1;
- (unsigned int)inputId;
- (void)setInputId:(unsigned int)arg1;
- (unsigned int)errorCode;
- (void)setErrorCode:(unsigned int)arg1;
- (BOOL)receiveEndFlag;
- (void)setReceiveEndFlag:(BOOL)arg1;
- (unsigned int)receiveDataLength;
- (void)setReceiveDataLength:(unsigned int)arg1;
- (BOOL)isSetInputPortWithBuiltInMic;
- (void)setIsSetInputPortWithBuiltInMic:(BOOL)arg1;
- (BOOL)isInputPortReseted;
- (void)setIsInputPortReseted:(BOOL)arg1;
- (unsigned long long)touchBeginTimestamp;
- (void)setTouchBeginTimestamp:(unsigned long long)arg1;
- (unsigned long long)requestRecordPermissionCallbackTimestamp;
- (void)setRequestRecordPermissionCallbackTimestamp:(unsigned long long)arg1;
- (unsigned long long)recordStartTimestamp;
- (void)setRecordStartTimestamp:(unsigned long long)arg1;
- (unsigned long long)prepareQueueTimestamp;
- (void)setPrepareQueueTimestamp:(unsigned long long)arg1;
- (unsigned long long)audioQueueNewTimestamp;
- (void)setAudioQueueNewTimestamp:(unsigned long long)arg1;
- (unsigned long long)audioQueueInitTimestamp;
- (void)setAudioQueueInitTimestamp:(unsigned long long)arg1;
- (unsigned long long)audioSessionActiveTimestamp;
- (void)setAudioSessionActiveTimestamp:(unsigned long long)arg1;
- (unsigned long long)inputDeviceSelectedTimestamp;
- (void)setInputDeviceSelectedTimestamp:(unsigned long long)arg1;
- (unsigned long long)recordBeginTimestamp;
- (void)setRecordBeginTimestamp:(unsigned long long)arg1;
- (unsigned long long)audioQueueStartedTimestamp;
- (void)setAudioQueueStartedTimestamp:(unsigned long long)arg1;
- (unsigned long long)receiveFirstPCMTimestamp;
- (void)setReceiveFirstPCMTimestamp:(unsigned long long)arg1;
- (BOOL)bCancelUpload;
- (void)setBCancelUpload:(BOOL)arg1;
- (void).cxx_destruct;
@end

