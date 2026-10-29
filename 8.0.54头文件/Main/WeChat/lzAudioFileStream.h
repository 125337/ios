@interface lzAudioFileStream : NSObject <KSAudioFileProtocol>
{
    BOOL _bEof; // +0x8
    BOOL _readyToProducePackets; // +0x9
    BOOL _disContinuous; // +0xa
    BOOL _isOpened; // +0xb
    BOOL _needCalculateByProcessedPackets; // +0xc
    unsigned int _averageBytesPerSecond; // +0x10
    unsigned int _maxPacketSize; // +0x14
    unsigned int _outputSizePerPacket; // +0x18
    unsigned int _audioDataBitRate; // +0x1c
    KSAudioDataProvider * _audioDataProvider; // +0x20
    OpaqueAudioFileStreamID * _fileStreamID; // +0x28
    long long _fileReadOffset; // +0x30
    double _fileDurion; // +0x38
    long long _curPacketOffset; // +0x40
    OpaqueAudioConverter * _audioConverter; // +0x48
    NSArray * _audioFileTypes; // +0x50
    unsigned long long _audioDataOffset; // +0x58
    unsigned long long _audioDataByteCount; // +0x60
    unsigned long long _audioDataPacketCount; // +0x68
    NSMutableArray * _audioPackets; // +0x70
    NSMutableData * _inputData; // +0x78
    AudioStreamPacketDescription * _inputDesc; // +0x80
    unsigned long long _processedPacketsCount; // +0x88
    unsigned long long _processedPacketsSizeTotal; // +0x90
    double _packetDuraion; // +0x98
    AudioStreamBasicDescription _fileFormat; // +0xa0
}
- (id)initWithDataProvider:(id)arg1;
- (AudioStreamBasicDescription)fileFormat;
- (AudioStreamBasicDescription *)outputDes;
- (BOOL)isEof;
- (long long)lastReadingPos;
- (long long)curPacketOffset;
- (unsigned int)maxPacketSize;
- (unsigned int)databytesPerSecond;
- (double)duration;
- (void)close;
- (BOOL)isOpened;
- (BOOL)open:(id *)arg1;
- (BOOL)isFileReadyToParsing;
- (BOOL)canProducePackets:(id *)arg1;
- (BOOL)seekPacketPos:(double)arg1;
- (int)readPacket:(void *)arg1 bytes:(unsigned int *)arg2 packets:(unsigned int *)arg3 des:(AudioStreamPacketDescription *)arg4;
- (BOOL)readPCMPacket:(AudioStreamBasicDescription *)arg1 buffer:(void *)arg2 bytes:(unsigned int *)arg3 packets:(unsigned int *)arg4 err:(id *)arg5;
- (void)handlePropertyChangeForFileStream:(OpaqueAudioFileStreamID *)arg1 fileStreamPropertyID:(unsigned int)arg2 ioFlags:(unsigned int *)arg3;
- (void)dealWithDataFormat;
- (void)dealWithFormatList:(OpaqueAudioFileStreamID *)arg1;
- (void)handleAudioPackets:(const void *)arg1 numberBytes:(unsigned int)arg2 numberPackets:(unsigned int)arg3 packetDescriptions:(AudioStreamPacketDescription *)arg4;
- (BOOL)createLPCMAudioConvertor:(AudioStreamBasicDescription *)arg1 error:(id *)arg2;
- (int)converter:(unsigned int *)arg1 bufferList:(AudioBufferList *)arg2 des:(AudioStreamPacketDescription * *)arg3;
- (int)checkAudioPacketsToRead;
- (id)guessAudioFileType;
- (id)audioDataProvider;
- (void)setAudioDataProvider:(id)arg1;
- (OpaqueAudioFileStreamID *)fileStreamID;
- (void)setFileStreamID:(OpaqueAudioFileStreamID *)arg1;
- (void)setFileFormat:(AudioStreamBasicDescription)arg1;
- (long long)fileReadOffset;
- (void)setFileReadOffset:(long long)arg1;
- (double)fileDurion;
- (void)setFileDurion:(double)arg1;
- (unsigned int)averageBytesPerSecond;
- (void)setAverageBytesPerSecond:(unsigned int)arg1;
- (void)setMaxPacketSize:(unsigned int)arg1;
- (BOOL)bEof;
- (void)setBEof:(BOOL)arg1;
- (void)setCurPacketOffset:(long long)arg1;
- (OpaqueAudioConverter *)audioConverter;
- (void)setAudioConverter:(OpaqueAudioConverter *)arg1;
- (unsigned int)outputSizePerPacket;
- (void)setOutputSizePerPacket:(unsigned int)arg1;
- (id)audioFileTypes;
- (void)setAudioFileTypes:(id)arg1;
- (unsigned long long)audioDataOffset;
- (void)setAudioDataOffset:(unsigned long long)arg1;
- (unsigned long long)audioDataByteCount;
- (void)setAudioDataByteCount:(unsigned long long)arg1;
- (unsigned long long)audioDataPacketCount;
- (void)setAudioDataPacketCount:(unsigned long long)arg1;
- (unsigned int)audioDataBitRate;
- (void)setAudioDataBitRate:(unsigned int)arg1;
- (id)audioPackets;
- (void)setAudioPackets:(id)arg1;
- (BOOL)readyToProducePackets;
- (void)setReadyToProducePackets:(BOOL)arg1;
- (BOOL)disContinuous;
- (void)setDisContinuous:(BOOL)arg1;
- (id)inputData;
- (void)setInputData:(id)arg1;
- (AudioStreamPacketDescription *)inputDesc;
- (void)setInputDesc:(AudioStreamPacketDescription *)arg1;
- (void)setIsOpened:(BOOL)arg1;
- (unsigned long long)processedPacketsCount;
- (void)setProcessedPacketsCount:(unsigned long long)arg1;
- (unsigned long long)processedPacketsSizeTotal;
- (void)setProcessedPacketsSizeTotal:(unsigned long long)arg1;
- (BOOL)needCalculateByProcessedPackets;
- (void)setNeedCalculateByProcessedPackets:(BOOL)arg1;
- (double)packetDuraion;
- (void)setPacketDuraion:(double)arg1;
- (void).cxx_destruct;
@end

