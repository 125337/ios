@interface C2CFileReportData : NSObject
{
    unsigned long long _sendHdImageFileCount; // +0x8
    unsigned long long _sendHdImageFileSize; // +0x10
    unsigned long long _recvHdImageFileCount; // +0x18
    unsigned long long _recvHdImageFileSize; // +0x20
    NSMutableString * _sendHdImageFileSizeList; // +0x28
    NSMutableString * _recvHdImageFileSizeList; // +0x30
    unsigned long long _sendMidImageFileCount; // +0x38
    unsigned long long _sendMidImageFileSize; // +0x40
    unsigned long long _recvMidImageFileCount; // +0x48
    unsigned long long _recvMidImageFileSize; // +0x50
    NSMutableString * _sendMidImageFileSizeList; // +0x58
    NSMutableString * _recvMidImageFileSizeList; // +0x60
    unsigned long long _sendThumbImageFileCount; // +0x68
    unsigned long long _sendThumbImageFileSize; // +0x70
    unsigned long long _recvThumbImageFileCount; // +0x78
    unsigned long long _recvThumbImageFileSize; // +0x80
    NSMutableString * _sendThumbImageFileSizeList; // +0x88
    NSMutableString * _recvThumbImageFileSizeList; // +0x90
    unsigned long long _sendHdVideoFileCount; // +0x98
    unsigned long long _sendHdVideoFileSize; // +0xa0
    unsigned long long _recvHdVideoFileCount; // +0xa8
    unsigned long long _recvHdVideoFileSize; // +0xb0
    NSMutableString * _sendHdVideoFileSizeList; // +0xb8
    NSMutableString * _recvHdVideoFileSizeList; // +0xc0
    unsigned long long _sendCompressedVideoFileCount; // +0xc8
    unsigned long long _sendCompressedVideoFileSize; // +0xd0
    unsigned long long _recvCompressedVideoFileCount; // +0xd8
    unsigned long long _recvCompressedVideoFileSize; // +0xe0
    NSMutableString * _sendCompressedVideoFileSizeList; // +0xe8
    NSMutableString * _recvCompressedVideoFileSizeList; // +0xf0
    unsigned long long _sendThumbVideoFileCount; // +0xf8
    unsigned long long _sendThumbVideoFileSize; // +0x100
    unsigned long long _recvThumbVideoFileCount; // +0x108
    unsigned long long _recvThumbVideoFileSize; // +0x110
    NSMutableString * _sendThumbVideoFileSizeList; // +0x118
    NSMutableString * _recvThumbVideoFileSizeList; // +0x120
    unsigned long long _sendAttachmentFileCount; // +0x128
    unsigned long long _sendAttachmentFileSize; // +0x130
    unsigned long long _recvAttachmentFileCount; // +0x138
    unsigned long long _recvAttachmentFileSize; // +0x140
    NSMutableString * _sendAttachmentFileSizeList; // +0x148
    NSMutableString * _recvAttachmentFileSizeList; // +0x150
    unsigned long long _sendVoiceFileCount; // +0x158
    unsigned long long _sendVoiceFileSize; // +0x160
    unsigned long long _recvVoiceFileCount; // +0x168
    unsigned long long _recvVoiceFileSize; // +0x170
    NSMutableString * _sendVoiceFileSizeList; // +0x178
    NSMutableString * _recvVoiceFileSizeList; // +0x180
    unsigned long long _sendRecordFileCount; // +0x188
    unsigned long long _sendRecordFileSize; // +0x190
    unsigned long long _recvRecordFileCount; // +0x198
    unsigned long long _recvRecordFileSize; // +0x1a0
    NSMutableString * _sendRecordFileSizeList; // +0x1a8
    NSMutableString * _recvRecordFileSizeList; // +0x1b0
}
- (id)init;
- (id)description;
- (unsigned long long)sendHdImageFileCount;
- (void)setSendHdImageFileCount:(unsigned long long)arg1;
- (unsigned long long)sendHdImageFileSize;
- (void)setSendHdImageFileSize:(unsigned long long)arg1;
- (unsigned long long)recvHdImageFileCount;
- (void)setRecvHdImageFileCount:(unsigned long long)arg1;
- (unsigned long long)recvHdImageFileSize;
- (void)setRecvHdImageFileSize:(unsigned long long)arg1;
- (id)sendHdImageFileSizeList;
- (void)setSendHdImageFileSizeList:(id)arg1;
- (id)recvHdImageFileSizeList;
- (void)setRecvHdImageFileSizeList:(id)arg1;
- (unsigned long long)sendMidImageFileCount;
- (void)setSendMidImageFileCount:(unsigned long long)arg1;
- (unsigned long long)sendMidImageFileSize;
- (void)setSendMidImageFileSize:(unsigned long long)arg1;
- (unsigned long long)recvMidImageFileCount;
- (void)setRecvMidImageFileCount:(unsigned long long)arg1;
- (unsigned long long)recvMidImageFileSize;
- (void)setRecvMidImageFileSize:(unsigned long long)arg1;
- (id)sendMidImageFileSizeList;
- (void)setSendMidImageFileSizeList:(id)arg1;
- (id)recvMidImageFileSizeList;
- (void)setRecvMidImageFileSizeList:(id)arg1;
- (unsigned long long)sendThumbImageFileCount;
- (void)setSendThumbImageFileCount:(unsigned long long)arg1;
- (unsigned long long)sendThumbImageFileSize;
- (void)setSendThumbImageFileSize:(unsigned long long)arg1;
- (unsigned long long)recvThumbImageFileCount;
- (void)setRecvThumbImageFileCount:(unsigned long long)arg1;
- (unsigned long long)recvThumbImageFileSize;
- (void)setRecvThumbImageFileSize:(unsigned long long)arg1;
- (id)sendThumbImageFileSizeList;
- (void)setSendThumbImageFileSizeList:(id)arg1;
- (id)recvThumbImageFileSizeList;
- (void)setRecvThumbImageFileSizeList:(id)arg1;
- (unsigned long long)sendHdVideoFileCount;
- (void)setSendHdVideoFileCount:(unsigned long long)arg1;
- (unsigned long long)sendHdVideoFileSize;
- (void)setSendHdVideoFileSize:(unsigned long long)arg1;
- (unsigned long long)recvHdVideoFileCount;
- (void)setRecvHdVideoFileCount:(unsigned long long)arg1;
- (unsigned long long)recvHdVideoFileSize;
- (void)setRecvHdVideoFileSize:(unsigned long long)arg1;
- (id)sendHdVideoFileSizeList;
- (void)setSendHdVideoFileSizeList:(id)arg1;
- (id)recvHdVideoFileSizeList;
- (void)setRecvHdVideoFileSizeList:(id)arg1;
- (unsigned long long)sendCompressedVideoFileCount;
- (void)setSendCompressedVideoFileCount:(unsigned long long)arg1;
- (unsigned long long)sendCompressedVideoFileSize;
- (void)setSendCompressedVideoFileSize:(unsigned long long)arg1;
- (unsigned long long)recvCompressedVideoFileCount;
- (void)setRecvCompressedVideoFileCount:(unsigned long long)arg1;
- (unsigned long long)recvCompressedVideoFileSize;
- (void)setRecvCompressedVideoFileSize:(unsigned long long)arg1;
- (id)sendCompressedVideoFileSizeList;
- (void)setSendCompressedVideoFileSizeList:(id)arg1;
- (id)recvCompressedVideoFileSizeList;
- (void)setRecvCompressedVideoFileSizeList:(id)arg1;
- (unsigned long long)sendThumbVideoFileCount;
- (void)setSendThumbVideoFileCount:(unsigned long long)arg1;
- (unsigned long long)sendThumbVideoFileSize;
- (void)setSendThumbVideoFileSize:(unsigned long long)arg1;
- (unsigned long long)recvThumbVideoFileCount;
- (void)setRecvThumbVideoFileCount:(unsigned long long)arg1;
- (unsigned long long)recvThumbVideoFileSize;
- (void)setRecvThumbVideoFileSize:(unsigned long long)arg1;
- (id)sendThumbVideoFileSizeList;
- (void)setSendThumbVideoFileSizeList:(id)arg1;
- (id)recvThumbVideoFileSizeList;
- (void)setRecvThumbVideoFileSizeList:(id)arg1;
- (unsigned long long)sendAttachmentFileCount;
- (void)setSendAttachmentFileCount:(unsigned long long)arg1;
- (unsigned long long)sendAttachmentFileSize;
- (void)setSendAttachmentFileSize:(unsigned long long)arg1;
- (unsigned long long)recvAttachmentFileCount;
- (void)setRecvAttachmentFileCount:(unsigned long long)arg1;
- (unsigned long long)recvAttachmentFileSize;
- (void)setRecvAttachmentFileSize:(unsigned long long)arg1;
- (id)sendAttachmentFileSizeList;
- (void)setSendAttachmentFileSizeList:(id)arg1;
- (id)recvAttachmentFileSizeList;
- (void)setRecvAttachmentFileSizeList:(id)arg1;
- (unsigned long long)sendVoiceFileCount;
- (void)setSendVoiceFileCount:(unsigned long long)arg1;
- (unsigned long long)sendVoiceFileSize;
- (void)setSendVoiceFileSize:(unsigned long long)arg1;
- (unsigned long long)recvVoiceFileCount;
- (void)setRecvVoiceFileCount:(unsigned long long)arg1;
- (unsigned long long)recvVoiceFileSize;
- (void)setRecvVoiceFileSize:(unsigned long long)arg1;
- (id)sendVoiceFileSizeList;
- (void)setSendVoiceFileSizeList:(id)arg1;
- (id)recvVoiceFileSizeList;
- (void)setRecvVoiceFileSizeList:(id)arg1;
- (unsigned long long)sendRecordFileCount;
- (void)setSendRecordFileCount:(unsigned long long)arg1;
- (unsigned long long)sendRecordFileSize;
- (void)setSendRecordFileSize:(unsigned long long)arg1;
- (unsigned long long)recvRecordFileCount;
- (void)setRecvRecordFileCount:(unsigned long long)arg1;
- (unsigned long long)recvRecordFileSize;
- (void)setRecvRecordFileSize:(unsigned long long)arg1;
- (id)sendRecordFileSizeList;
- (void)setSendRecordFileSizeList:(id)arg1;
- (id)recvRecordFileSizeList;
- (void)setRecvRecordFileSizeList:(id)arg1;
- (void).cxx_destruct;
@end
