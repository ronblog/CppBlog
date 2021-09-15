-----
Readme
build kafka g++ -std=c++14 consumer2.cpp  -lrdkafka++

```
 1  cd ..
    2  cd kafka/bin/
  
    5  ./kafka-topics.sh --create --zookeeper localhost:2181 --replication-factor 1 --partitions 1 --topic test
    6  ./kafka-topics.sh --create --zookeeper localhost:2181 --replication-factor 1 --partitions 1 --topic test123
    7  ./kafka-topics.sh --create --zookeeper localhost:2181 --replication-factor 1 --partitions 1 --topic test456
    8  ./kafka-topics.sh --list --zookeeper localhost:2181 
    9  history
    ./kafka-console-producer.sh  --broker-list localhost:9092 --topic test
    
    ./kafka-console-consumer.sh --bootstrap-server localhost:9092 --topic test --from-beginning

```
