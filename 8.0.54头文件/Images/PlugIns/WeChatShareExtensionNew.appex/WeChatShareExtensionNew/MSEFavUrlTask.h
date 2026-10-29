@interface MSEFavUrlTask : NSObject <PBCoding>
{
    NSString * title; // +0x8
    NSString * contentUrl; // +0x10
    NSString * taskID; // +0x18
}
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_contentUrl;
+ (void)PBArrayAdd_taskID;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)contentUrl;
- (void)setContentUrl:(id)arg1;
- (id)taskID;
- (void)setTaskID:(id)arg1;
- (void).cxx_destruct;
@end

