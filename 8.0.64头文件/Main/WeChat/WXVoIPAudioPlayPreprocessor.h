@interface WXVoIPAudioPlayPreprocessor : NSObject
{
    unique_ptr<wxvoipsdk::audio::AudioFrameRingBuffer, std::default_delete<wxvoipsdk::audio::AudioFrameRingBuffer>> _ringBuffer; // +0x8
    AudioFrame _getDelegateDataHelpBuffer; // +0x10
    int _getDataLengthBytes; // +0x70
    id <AudioPlayPreprocessedDelegate> _delegate; // +0x78
    DataBasicDescription _getDataDescription; // +0x80
}
- (void)getData:(AudioFrame *)arg1;
- (AudioFrame)getDelegateDataByRingBuffer:(const DataBasicDescription *)arg1 length:(int)arg2;
- (void)initializeHelpBuffer:(const DataBasicDescription *)arg1;
- (void)writeToRingBufferFromDelegate:(const DataBasicDescription *)arg1;
- (void)fillBufferWithBitsFormatedData:(AudioFrame)arg1 dst:(AudioFrame *)arg2;
- (void)resetIfDataDescriptionChanged:(const DataBasicDescription *)arg1;
- (int)helperBufferLengthBytes:(const DataBasicDescription *)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (DataBasicDescription)getDataDescription;
- (void)setGetDataDescription:(DataBasicDescription)arg1;
- (int)getDataLengthBytes;
- (void)setGetDataLengthBytes:(int)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
