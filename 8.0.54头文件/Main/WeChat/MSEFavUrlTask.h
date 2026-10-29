@interface MSEFavUrlTask : NSObject <PBCoding>
{
    NSString * _title; // +0x8
    NSString * _contentUrl; // +0x10
    NSString * _taskID; // +0x18
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

