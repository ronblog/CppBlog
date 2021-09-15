-----
Readme
build kafka g++ -std=c++14 consumer2.cpp  -lrdkafka++

```
  cd ..
      cd kafka/bin/
  1, open zookeeper:
   ./zookeeper-server-start.sh ../config/zookeeper.properties
  2, open kafka
    ./kafka-server-start.sh ../config/server.properties 
  3 Create topic 
   ./kafka-topics.sh --create --zookeeper localhost:2181 --replication-factor 1 --partitions 1 --topic test
   ./kafka-topics.sh --create --zookeeper localhost:2181 --replication-factor 1 --partitions 1 --topic test123
   ./kafka-topics.sh --create --zookeeper localhost:2181 --replication-factor 1 --partitions 1 --topic test456
  4, check topics
   ./kafka-topics.sh --list --zookeeper localhost:2181 
  5, create logs
    ./kafka-console-producer.sh  --broker-list localhost:9092 --topic test
  6, consumer logs
    ./kafka-console-consumer.sh --bootstrap-server localhost:9092 --topic test --from-beginning

```
