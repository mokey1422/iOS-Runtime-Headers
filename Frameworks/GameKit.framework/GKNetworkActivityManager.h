/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@interface GKNetworkActivityManager : NSObject  {
    BOOL _enabled;
    int _count;
}

+ (id)sharedManager;

- (void)resetNetworkActivity;
- (void)endNetworkActivity;
- (void)beginNetworkActivity;
- (id)init;

@end