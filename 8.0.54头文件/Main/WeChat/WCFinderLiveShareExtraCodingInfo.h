@interface WCFinderLiveShareExtraCodingInfo : NSObject <NSCoding>
{
    LiveSdkInfo * _liveSdkInfo; // +0x8
    FinderLiveCoverInfo * _coverInfo; // +0x10
    NSMutableArray * _entranceAdInfos; // +0x18
}
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)liveSdkInfo;
- (void)setLiveSdkInfo:(id)arg1;
- (id)coverInfo;
- (void)setCoverInfo:(id)arg1;
- (id)entranceAdInfos;
- (void)setEntranceAdInfos:(id)arg1;
- (void).cxx_destruct;
@end

