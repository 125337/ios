@interface VOIPRecentConnect : NSObject <PBCoding>
{
    NSMutableArray * _m_videoRecentConnectUserName; // +0x8
    NSMutableArray * _m_voiceRecentConnectUserName; // +0x10
}
+ (void)PBArrayAdd_m_videoRecentConnectUserName;
+ (void)PBArrayAdd_m_voiceRecentConnectUserName;
+ (void)initialize;
+ (id)getSaveRootDir;
+ (id)getSavePath;
+ (id)loadFromFile;
- (id)getPBPropertyTable;
- (id)init;
- (id)getRecentVideoConnect;
- (id)getRecentVoiceContact;
- (void)addRecentVideoConnect:(id)arg1;
- (void)addRecentVoiceConnect:(id)arg1;
- (void)saveToCache;
- (id)m_videoRecentConnectUserName;
- (void)setM_videoRecentConnectUserName:(id)arg1;
- (id)m_voiceRecentConnectUserName;
- (void)setM_voiceRecentConnectUserName:(id)arg1;
- (void).cxx_destruct;
@end

