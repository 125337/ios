@interface _TtC6WeChat17MMURLDownloadTask : _TtCs12_SwiftObject <MMResourceDownloadDelegate>
{
     identifier; // +0x10
     url; // +0x20
     downloader; // +0x30
     response; // +0x38
}
- (void)onDownloadFinish:(long long)arg1 downloadData:(id)arg2 resUrl:(id)arg3 cdnResultCode:(long long)arg4;
@end
