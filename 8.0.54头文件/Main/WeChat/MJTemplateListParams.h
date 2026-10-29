@interface MJTemplateListParams : NSObject
{
    unsigned long long _eventId; // +0x8
    NSString * _priorityTemplateId; // +0x10
    unsigned long long _scene; // +0x18
    NSString * _categoryKey; // +0x20
    NSString * _musicId; // +0x28
}
+ (id)defaultParams;
- (unsigned long long)eventId;
- (void)setEventId:(unsigned long long)arg1;
- (id)priorityTemplateId;
- (void)setPriorityTemplateId:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (id)categoryKey;
- (void)setCategoryKey:(id)arg1;
- (id)musicId;
- (void)setMusicId:(id)arg1;
- (void).cxx_destruct;
@end

