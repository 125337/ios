@interface lzAudioFile : NSObject <KSAudioFileProtocol>
{
    OpaqueAudioFileID * _fileID; // +0x8
    AudioStreamBasicDescription _fileFormat; // +0x10
    unsigned int _bitRate; // +0x38
    long long _dataOffset; // +0x40
    double _duration; // +0x48
    unsigned int _maxPacketSize; // +0x50
    unsigned long long _packetCnt; // +0x58
    unsigned int _databytesPerSecond; // +0x60
    BOOL _isEof; // +0x64
    long long _lastReadingPos; // +0x68
    long long _curPacketOffset; // +0x70
    AudioStreamPacketDescription[16] _packetDes; // +0x78
    NSData * _magicCookie; // +0x178
    BOOL _bParsingNoData; // +0x180
    BOOL _bWatingForData; // +0x181
    unsigned int _audioBufSize; // +0x184
    unsigned int _outputSizePerPacket; // +0x188
    unsigned int _audioFileId; // +0x18c
    KSAudioDataProvider * _audioDataProvider; // +0x190
    OpaqueAudioConverter * _audioConverter; // +0x198
    void * _audioBuf; // +0x1a0
    NSArray * _audioFileTypes; // +0x1a8
    void * _seekAudioBuf; // +0x1b0
}
+ (void)initialize;
- (id)initWithDataProvider:(id)arg1;
- (AudioStreamBasicDescription *)outputDes;
- (void)close;
- (BOOL)isOpened;
- (BOOL)open:(id *)arg1;
- (BOOL)seekPacketPos:(double)arg1;
- (int)readPacket:(void *)arg1 bytes:(unsigned int *)arg2 packets:(unsigned int *)arg3 des:(AudioStreamPacketDescription *)arg4;
- (BOOL)readPCMPacket:(AudioStreamBasicDescription *)arg1 buffer:(void *)arg2 bytes:(unsigned int *)arg3 packets:(unsigned int *)arg4 err:(id *)arg5;
- (BOOL)createLPCMAudioConvertor:(AudioStreamBasicDescription *)arg1 error:(id *)arg2;
- (int)converter:(unsigned int *)arg1 bufferList:(AudioBufferList *)arg2 des:(AudioStreamPacketDescription * *)arg3;
- (void)prepareTailReadData:(_NSRange)arg1;
- (BOOL)isFileReadyToParsing;
- (BOOL)isCanParse;
- (BOOL)fillFileFormat:(id *)arg1;
- (BOOL)fillMiscProperties:(id *)arg1;
- (id)guessAudioFileType;
- (AudioStreamBasicDescription)fileFormat;
- (unsigned int)maxPacketSize;
- (BOOL)isEof;
- (void)setIsEof:(BOOL)arg1;
- (unsigned int)databytesPerSecond;
- (long long)lastReadingPos;
- (void)setLastReadingPos:(long long)arg1;
- (long long)curPacketOffset;
- (double)duration;
- (void)setDuration:(double)arg1;
- (id)magicCookie;
- (void)setMagicCookie:(id)arg1;
- (id)audioDataProvider;
- (void)setAudioDataProvider:(id)arg1;
- (BOOL)bParsingNoData;
- (void)setBParsingNoData:(BOOL)arg1;
- (BOOL)bWatingForData;
- (void)setBWatingForData:(BOOL)arg1;
- (OpaqueAudioConverter *)audioConverter;
- (void)setAudioConverter:(OpaqueAudioConverter *)arg1;
- (void *)audioBuf;
- (void)setAudioBuf:(void *)arg1;
- (unsigned int)audioBufSize;
- (void)setAudioBufSize:(unsigned int)arg1;
- (unsigned int)outputSizePerPacket;
- (void)setOutputSizePerPacket:(unsigned int)arg1;
- (unsigned int)audioFileId;
- (void)setAudioFileId:(unsigned int)arg1;
- (id)audioFileTypes;
- (void)setAudioFileTypes:(id)arg1;
- (void *)seekAudioBuf;
- (void)setSeekAudioBuf:(void *)arg1;
- (void).cxx_destruct;
@end
