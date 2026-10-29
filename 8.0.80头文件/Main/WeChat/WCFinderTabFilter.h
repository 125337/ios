@interface WCFinderTabFilter : NSObject
{
    unsigned int _type; // +0x8
    NSString * _name; // +0x10
}
+ (id)emptyLocationTipsForType:(unsigned int)arg1;
+ (id)emptyTopicTipsForType:(unsigned int)arg1;
+ (unsigned int)eventPageIdForType:(unsigned int)arg1;
- (id)initWithType:(unsigned int)arg1 name:(id)arg2;
- (id)initWithTopicFilter:(id)arg1;
- (id)initWithPoiStreamFilter:(id)arg1;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (void).cxx_destruct;
@end
