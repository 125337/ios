@interface EcsTrackerItem : NSObject
{
    long long _type; // +0x8
    EcsTrackerStep * _step; // +0x10
}
+ (id /* block */)start;
+ (id /* block */)step;
+ (id /* block */)end;
+ (id /* block */)success;
+ (id /* block */)fail;
+ (id /* block */)_createItem:(long long)arg1;
- (id)init;
- (id /* block */)sceneId;
- (id /* block */)name;
- (id /* block */)groupStart;
- (id /* block */)groupEnd;
- (id /* block */)groupStartList;
- (id /* block */)groupEndList;
- (long long)type;
- (void)setType:(long long)arg1;
- (id)step;
- (void).cxx_destruct;
@end
