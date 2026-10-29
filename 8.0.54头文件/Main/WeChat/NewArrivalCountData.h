@interface NewArrivalCountData : NSObject <NSCoding>
{
    NSString * m_nsFile; // +0x8
    NSMutableDictionary * m_dicHistory; // +0x10
}
+ (id)dataFromFile:(id)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)afterLoadData:(id)arg1;
- (BOOL)save;
- (id)getArrayItem;
- (id)getItem:(id)arg1;
- (BOOL)setItem:(id)arg1;
- (BOOL)updateItem:(id)arg1 arrivalCount:(unsigned int)arg2 msgid:(unsigned int)arg3;
- (BOOL)removeItem:(id)arg1;
- (void).cxx_destruct;
@end

