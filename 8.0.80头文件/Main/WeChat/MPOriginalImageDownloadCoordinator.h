@interface MPOriginalImageDownloadCoordinator : NSObject
{
    MPOriginalImageEntryStore * _store; // +0x8
    MPOriginalImageDownloader * _downloader; // +0x10
}
- (id)initWithStore:(id)arg1 downloader:(id)arg2;
- (id)startDownloadForURL:(id)arg1 key:(id)arg2 isLive:(BOOL)arg3 liveVideoUrl:(id)arg4 videoKey:(id)arg5;
- (void)beginDownloadEntryForKey:(id)arg1 url:(id)arg2 isLive:(BOOL)arg3 liveVideoUrl:(id)arg4 videoKey:(id)arg5 imageOnDisk:(BOOL)arg6 videoOnDisk:(BOOL)arg7;
- (id)pollProgressForKey:(id)arg1;
- (void)startImageDownloadForEntry:(id)arg1;
- (void)startVideoDownloadForEntry:(id)arg1;
- (void)recomputeMergedProgressForEntry:(id)arg1;
- (void)tryFinalizeEntry:(id)arg1;
- (void)startProbeForEntry:(id)arg1;
- (id)store;
- (void)setStore:(id)arg1;
- (id)downloader;
- (void)setDownloader:(id)arg1;
- (void).cxx_destruct;
@end
