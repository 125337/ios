@interface BrandServiceHeadImageProvider : NSObject <IContactMgrExt>
{
    NSMutableDictionary * m_headImageCache; // +0x8
}
- (void)onModifyContact:(id)arg1;
- (void)onModifyContactHeadImage:(id)arg1;
- (void)onMemoryWarnning;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
@end

