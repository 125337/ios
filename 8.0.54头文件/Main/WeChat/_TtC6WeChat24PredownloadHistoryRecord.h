@interface _TtC6WeChat24PredownloadHistoryRecord : NSObject
{
     date; // +0x0
     size; // +0x0
     serverPriority; // +0x0
     clientPriority; // +0x0
     downloadState; // +0x0
     downloadRetries; // +0x0
     sizeThatStartPredownload; // +0x0
     skipQuota; // +0x0
}
- (id)date;
- (void)setDate:(id)arg1;
- (id)size;
- (void)setSize:(id)arg1;
- (id)serverPriority;
- (void)setServerPriority:(id)arg1;
- (id)clientPriority;
- (void)setClientPriority:(id)arg1;
- (long long)downloadState;
- (void)setDownloadState:(long long)arg1;
- (long long)downloadRetries;
- (void)setDownloadRetries:(long long)arg1;
- (id)sizeThatStartPredownload;
- (void)setSizeThatStartPredownload:(id)arg1;
- (BOOL)skipQuota;
- (void)setSkipQuota:(BOOL)arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (id)init;
- (void).cxx_destruct;
@end

