@interface TPVodPlayFlowParams : NSObject
{
    unsigned long long _tpSetdataSourcetimeMs; // +0x8
    unsigned long long _convertDataSourceEtimeMs; // +0x10
    unsigned long long _tpPrepareTimeMs; // +0x18
    unsigned long long _coreApiPrepareTimeMs; // +0x20
    unsigned long long _coreSchedulingThreadPrepareTimeMs; // +0x28
    unsigned long long _demuxerThreadPrepareTimeMs; // +0x30
    unsigned long long _demuxerOpenFileStimeMs; // +0x38
    unsigned long long _demuxerOpenFileEtimeMs; // +0x40
    unsigned long long _initFirstClipPositionEtimeMs; // +0x48
    unsigned long long _firstVideoPacketReadEtimeMs; // +0x50
    unsigned long long _firstAudioPacketReadEtimeMs; // +0x58
    unsigned long long _demuxerThreadOnPreparedTimeMs; // +0x60
    unsigned long long _coreSchedulingThreadOnPreparedTimeMs; // +0x68
    unsigned long long _tpOnPreparedTimeMs; // +0x70
    unsigned long long _videoDecoderOpenedTimeMs; // +0x78
    unsigned long long _firstVideoFrameRenderEtimeMs; // +0x80
    unsigned long long _audioDecoderOpenedTimeMs; // +0x88
    unsigned long long _firstAudioFrameRenderEtimeMs; // +0x90
    unsigned long long _datatransportCreateTaskTimeMs; // +0x98
    unsigned long long _datatransportSetClipInfoTimeMs; // +0xa0
    unsigned long long _datatransportGetClipUrlTimeMs; // +0xa8
    unsigned long long _datatransportM3u8RequestTimeMs; // +0xb0
    unsigned long long _datatransportM3u8ResponseTimeMs; // +0xb8
    unsigned long long _datatransportdataRequestTimeMs; // +0xc0
    unsigned long long _datatransportDataResponsetimeMs; // +0xc8
    unsigned long long _datatransportDataEnoughTimeMs; // +0xd0
    long long _maxStreamBitrateKbps; // +0xd8
    long long _avgStreamBitrateKbps; // +0xe0
    long long _minStreamBitrateKbps; // +0xe8
    long long _maxVideoDecodeCostTimeMs; // +0xf0
    long long _avgVideoDecodeCostTimeMs; // +0xf8
    long long _minVideoDecodeCostTimeMs; // +0x100
    long long _videoDecodeFrameTotalCount; // +0x108
    long long _videoRenderFrameTotalCount; // +0x110
}
- (id)init;
- (unsigned long long)tpSetdataSourcetimeMs;
- (void)setTpSetdataSourcetimeMs:(unsigned long long)arg1;
- (unsigned long long)convertDataSourceEtimeMs;
- (void)setConvertDataSourceEtimeMs:(unsigned long long)arg1;
- (unsigned long long)tpPrepareTimeMs;
- (void)setTpPrepareTimeMs:(unsigned long long)arg1;
- (unsigned long long)coreApiPrepareTimeMs;
- (void)setCoreApiPrepareTimeMs:(unsigned long long)arg1;
- (unsigned long long)coreSchedulingThreadPrepareTimeMs;
- (void)setCoreSchedulingThreadPrepareTimeMs:(unsigned long long)arg1;
- (unsigned long long)demuxerThreadPrepareTimeMs;
- (void)setDemuxerThreadPrepareTimeMs:(unsigned long long)arg1;
- (unsigned long long)demuxerOpenFileStimeMs;
- (void)setDemuxerOpenFileStimeMs:(unsigned long long)arg1;
- (unsigned long long)demuxerOpenFileEtimeMs;
- (void)setDemuxerOpenFileEtimeMs:(unsigned long long)arg1;
- (unsigned long long)initFirstClipPositionEtimeMs;
- (void)setInitFirstClipPositionEtimeMs:(unsigned long long)arg1;
- (unsigned long long)firstVideoPacketReadEtimeMs;
- (void)setFirstVideoPacketReadEtimeMs:(unsigned long long)arg1;
- (unsigned long long)firstAudioPacketReadEtimeMs;
- (void)setFirstAudioPacketReadEtimeMs:(unsigned long long)arg1;
- (unsigned long long)demuxerThreadOnPreparedTimeMs;
- (void)setDemuxerThreadOnPreparedTimeMs:(unsigned long long)arg1;
- (unsigned long long)coreSchedulingThreadOnPreparedTimeMs;
- (void)setCoreSchedulingThreadOnPreparedTimeMs:(unsigned long long)arg1;
- (unsigned long long)tpOnPreparedTimeMs;
- (void)setTpOnPreparedTimeMs:(unsigned long long)arg1;
- (unsigned long long)videoDecoderOpenedTimeMs;
- (void)setVideoDecoderOpenedTimeMs:(unsigned long long)arg1;
- (unsigned long long)firstVideoFrameRenderEtimeMs;
- (void)setFirstVideoFrameRenderEtimeMs:(unsigned long long)arg1;
- (unsigned long long)audioDecoderOpenedTimeMs;
- (void)setAudioDecoderOpenedTimeMs:(unsigned long long)arg1;
- (unsigned long long)firstAudioFrameRenderEtimeMs;
- (void)setFirstAudioFrameRenderEtimeMs:(unsigned long long)arg1;
- (unsigned long long)datatransportCreateTaskTimeMs;
- (void)setDatatransportCreateTaskTimeMs:(unsigned long long)arg1;
- (unsigned long long)datatransportSetClipInfoTimeMs;
- (void)setDatatransportSetClipInfoTimeMs:(unsigned long long)arg1;
- (unsigned long long)datatransportGetClipUrlTimeMs;
- (void)setDatatransportGetClipUrlTimeMs:(unsigned long long)arg1;
- (unsigned long long)datatransportM3u8RequestTimeMs;
- (void)setDatatransportM3u8RequestTimeMs:(unsigned long long)arg1;
- (unsigned long long)datatransportM3u8ResponseTimeMs;
- (void)setDatatransportM3u8ResponseTimeMs:(unsigned long long)arg1;
- (unsigned long long)datatransportdataRequestTimeMs;
- (void)setDatatransportdataRequestTimeMs:(unsigned long long)arg1;
- (unsigned long long)datatransportDataResponsetimeMs;
- (void)setDatatransportDataResponsetimeMs:(unsigned long long)arg1;
- (unsigned long long)datatransportDataEnoughTimeMs;
- (void)setDatatransportDataEnoughTimeMs:(unsigned long long)arg1;
- (long long)maxStreamBitrateKbps;
- (void)setMaxStreamBitrateKbps:(long long)arg1;
- (long long)avgStreamBitrateKbps;
- (void)setAvgStreamBitrateKbps:(long long)arg1;
- (long long)minStreamBitrateKbps;
- (void)setMinStreamBitrateKbps:(long long)arg1;
- (long long)maxVideoDecodeCostTimeMs;
- (void)setMaxVideoDecodeCostTimeMs:(long long)arg1;
- (long long)avgVideoDecodeCostTimeMs;
- (void)setAvgVideoDecodeCostTimeMs:(long long)arg1;
- (long long)minVideoDecodeCostTimeMs;
- (void)setMinVideoDecodeCostTimeMs:(long long)arg1;
- (long long)videoDecodeFrameTotalCount;
- (void)setVideoDecodeFrameTotalCount:(long long)arg1;
- (long long)videoRenderFrameTotalCount;
- (void)setVideoRenderFrameTotalCount:(long long)arg1;
@end

