@interface TPDataTransportDownloadProgressUpdataEventInfo : TPPlayerEventInfo
{
    long long _downloadSpeedKbps; // +0x20
}
- (id)init;
- (long long)downloadSpeedKbps;
- (void)setDownloadSpeedKbps:(long long)arg1;
@end
