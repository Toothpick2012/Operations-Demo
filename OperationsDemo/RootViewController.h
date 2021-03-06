//
//  RootViewController.h
//  OperationsDemo
//
//  Created by Ankit Gupta on 6/6/11.
//  Copyright 2011 Pulse News. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface RootViewController : UITableViewController {

    NSMutableDictionary *websites;
    NSMutableDictionary *websiteData;
    NSOperationQueue *operationQueue;
    
    NSOperation *downloadToDiskOperation; // strong
    NSOperation *downloadJSONOperation; // strong
}


@end
